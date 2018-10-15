#ifndef MY_ADD_H
#define MY_ADD_H


extern long g_gcr3;
extern struct hlist_head mmu_guest_page_hash[KVM_NUM_MMU_PAGES];
extern bool g_is_in_pt;
extern bool g_start;
extern bool g_first;
//extern u64 g_pf_addr;

void free_alloc_guest_pt(struct kvm_vcpu *vcpu);
bool is_in_guest_pt(struct kvm_vcpu *vcpu, gfn_t gfn);
void del_pt_entry(struct kvm_vcpu *vcpu, gfn_t gfn);
void add_guest_pt(struct kvm_vcpu *vcpu, gfn_t gfn, int level);
bool add_new_guest_pt(struct kvm_vcpu *vcpu, gfn_t raw, gfn_t gfn, int level);
struct kvm_mmu_guest_page* get_kmgp_from_gpa(struct kvm_vcpu *vcpu, gfn_t gfn); 
void del_pt_all_entry(struct kvm_vcpu *vcpu, gfn_t gfn, int level);
bool check_new_in_pt(struct kvm_vcpu *vcpu, gfn_t gfn, u64 gcr3);
int init_guest_page_table(struct kvm_vcpu *vcpu, u64 gcr3);
u64 set_spt_ro(struct kvm_vcpu *vcpu, gpa_t gpa);
u64 set_spt_writable(struct kvm_vcpu *vcpu, gpa_t gpa);
u64 set_spt_nx(struct kvm_vcpu *vcpu, gpa_t gpa);
u64 set_spt_x(struct kvm_vcpu *vcpu, gpa_t gpa);
bool check_if_ro(struct kvm_vcpu *vcpu, gpa_t gpa);





#endif
