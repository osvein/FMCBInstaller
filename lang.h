enum SYS_UI_MESSAGES{
	SYS_UI_MSG_NO_CARDS	= 0,
	SYS_UI_MSG_MULTIPLE_CARDS,
	SYS_UI_MSG_INST_CFM_SLOT1,
	SYS_UI_MSG_INST_CFM_SLOT2,
	SYS_UI_MSG_INST_CFM_HDD,
	SYS_UI_MSG_INST_PROMPT_INST_TYPE,
	SYS_UI_MSG_CACHE_INIT_ERROR,
	SYS_UI_MSG_CNF_FOUND,
	SYS_UI_MSG_CNF_HDD_FOUND,
	SYS_UI_MSG_CLEANUP_FAILED,
	SYS_UI_MSG_CLEANUP_COMPLETE,
	SYS_UI_MSG_INSTALL_FAILED,
	SYS_UI_MSG_INSTALL_COMPLETE,
	SYS_UI_MSG_CLNUP_CFM_SLOT1,
	SYS_UI_MSG_CLNUP_CFM_SLOT2,
	SYS_UI_MSG_CLNUP_CFM_HDD,
	SYS_UI_MSG_FORMAT_CFM_SLOT1,
	SYS_UI_MSG_FORMAT_CFM_SLOT2,
	SYS_UI_MSG_FORMAT_ERROR,
	SYS_UI_MSG_FORMAT_COMPLETE,
	SYS_UI_MSG_DUMP_CFM_SLOT1,
	SYS_UI_MSG_DUMP_CFM_SLOT2,
	SYS_UI_MSG_DUMP_ERROR,
	SYS_UI_MSG_DUMP_COMPLETE,
	SYS_UI_MSG_RESTORE_CFM_SLOT1,
	SYS_UI_MSG_RESTORE_CFM_SLOT2,
	SYS_UI_MSG_RESTORE_ERROR,
	SYS_UI_MSG_RESTORE_COMPLETE,
	SYS_UI_MSG_MULTI_INST_REQ,
	SYS_UI_MSG_HAS_MULTI_INST,
	SYS_UI_MSG_FREE_SPC_CALC_ERR,
	SYS_UI_MSG_INSUF_FREE_SPC,
	SYS_UI_MSG_INSUF_FREE_SPC_HDD,
	SYS_UI_MSG_INSUF_FREE_SPC_HDD_APPS,
	SYS_UI_MSG_FORMATTING_MC,
	SYS_UI_MSG_UNINSTALLING_FMCB,
	SYS_UI_MSG_UNINSTALLING_FHDB,
	SYS_UI_MSG_READ_INST_ERROR,
	SYS_UI_MSG_WRITE_MC_ERROR,
	SYS_UI_MSG_READ_MC_ERROR,
	SYS_UI_MSG_WRITE_HDD_ERROR,
	SYS_UI_MSG_WRITE_INST_ERROR,
	SYS_UI_MSG_NO_MEM_ERROR,
	SYS_UI_MSG_NO_ENT_ERROR,
	SYS_UI_MSG_QUIT_DUMPING,
	SYS_UI_MSG_QUIT_RESTORING,
	SYS_UI_MSG_CROSSLINK_FAIL,
	SYS_UI_MSG_MG_BIND_FAIL,
	SYS_UI_MSG_UNSUPPORTED_UINST_FILE_ERROR,
	SYS_UI_MSG_DSC_INST_FMCB,
	SYS_UI_MSG_DSC_MI_FMCB,
	SYS_UI_MSG_DSC_UINST_FMCB,
	SYS_UI_MSG_DSC_DOWNGRADE_MI,
	SYS_UI_MSG_DSC_FORMAT_MC,
	SYS_UI_MSG_DSC_DUMP_MC,
	SYS_UI_MSG_DSC_REST_MC,
	SYS_UI_MSG_DSC_INST_CROSS_PSX,
	SYS_UI_MSG_DSC_INST_FHDB,
	SYS_UI_MSG_DSC_UINST_FHDB,
	SYS_UI_MSG_DSC_QUIT,
	SYS_UI_MSG_HDD_CORRUPTED,
	SYS_UI_MSG_HDD_SMART_FAILED,
	SYS_UI_MSG_ROM_UNSUPPORTED,
	SYS_UI_MSG_MULTI_WARN,
	SYS_UI_MSG_QUIT,

	SYS_UI_MSG_COUNT
};

enum SYS_UI_LABEL_TEXT{
	SYS_UI_LBL_OK	= 0,
	SYS_UI_LBL_CANCEL,
	SYS_UI_LBL_YES,
	SYS_UI_LBL_NO,
	SYS_UI_LBL_WARNING,
	SYS_UI_LBL_ERROR,
	SYS_UI_LBL_INFO,
	SYS_UI_LBL_CONFIRM,
	SYS_UI_LBL_SLOT1,
	SYS_UI_LBL_SLOT2,
	SYS_UI_LBL_DEV_MC,
	SYS_UI_LBL_DEV_HDD,
	SYS_UI_LBL_WAIT,
	SYS_UI_LBL_INSTALLING,
	SYS_UI_LBL_DUMPING_MC,
	SYS_UI_LBL_RESTORING_MC,
	SYS_UI_LBL_INST_TYPE_NORMAL,
	SYS_UI_LBL_INST_TYPE_CRS_MDL,
	SYS_UI_LBL_INST_TYPE_CRS_REG,
	SYS_UI_LBL_RATE,
	SYS_UI_LBL_ETA,
	SYS_UI_LBL_INSTALL,
	SYS_UI_LBL_MI,
	SYS_UI_LBL_UINSTALL,
	SYS_UI_LBL_UMI,
	SYS_UI_LBL_FORMAT_MC,
	SYS_UI_LBL_DUMP_MC,
	SYS_UI_LBL_REST_MC,
	SYS_UI_LBL_INSTALL_CROSS_PSX,
	SYS_UI_LBL_INSTALL_FHDB,
	SYS_UI_LBL_UINSTALL_FHDB,
	SYS_UI_LBL_EXIT,
	SYS_UI_LBL_B,
	SYS_UI_LBL_KB,
	SYS_UI_LBL_MB,
	SYS_UI_LBL_GB,
	SYS_UI_LBL_TB,
	SYS_UI_LBL_BPS,
	SYS_UI_LBL_KBPS,
	SYS_UI_LBL_MBPS,
	SYS_UI_LBL_AVAILABLE_SPC,
	SYS_UI_LBL_REQUIRED_SPC,
	SYS_UI_LBL_MENU_MAIN,
	SYS_UI_LBL_MENU_EXTRAS,
	SYS_UI_LBL_MENU_MC,

	SYS_UI_LBL_COUNT
};
