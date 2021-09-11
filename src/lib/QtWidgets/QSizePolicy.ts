export enum QSizePolicyPolicyFlag {
    GrowFlag = 1,
    ExpandFlag = 2,
    ShrinkFlag = 4,
    IgnoreFlag = 8,
}

export enum QSizePolicyPolicy {
    Fixed = 0,
    Minimum = QSizePolicyPolicyFlag.GrowFlag,
    Maximum = QSizePolicyPolicyFlag.ShrinkFlag,
    Preferred = QSizePolicyPolicyFlag.GrowFlag | QSizePolicyPolicyFlag.ShrinkFlag,
    Expanding = QSizePolicyPolicyFlag.GrowFlag | QSizePolicyPolicyFlag.ShrinkFlag | QSizePolicyPolicyFlag.ExpandFlag,
    MinimumExpanding = QSizePolicyPolicyFlag.GrowFlag | QSizePolicyPolicyFlag.ExpandFlag,
    Ignored = QSizePolicyPolicyFlag.ShrinkFlag | QSizePolicyPolicyFlag.GrowFlag | QSizePolicyPolicyFlag.IgnoreFlag,
}
