//+----------------------------------------------------------------------------+
//|OtmAutoVerUp.cpp     OTM Profile Manager function                           |
//+----------------------------------------------------------------------------+
//|Copyright Notice:                                                           |
//|                                                                            |
//|          Copyright (C) 1990-2015, International Business Machines          |
//|          Corporation and others. All rights reserved                       |
//|                                                                            |
//|                                                                            |
//|                                                                            |
//+----------------------------------------------------------------------------+
//|Author:             Flora Lee                                               |
//|                                                                            |
//+----------------------------------------------------------------------------+
//|Description:        This is module contains some functions which are used   |
//|                    during profile settings management                      |
//+----------------------------------------------------------------------------+
//|Entry Points:                                                               |
//|                                                                            |
//|                                                                            |
//+----------------------------------------------------------------------------+
//|Internals:                                                                  |
//|                                                                            |
//+----------------------------------------------------------------------------+
#pragma once

#define EMPTY_STR                                         ""

#define APP_TOOL_NAME_STR                                 "Profile Settings Management"

#define MGR_SET_TAB_NAME_STR                              "Manage Settings"
#define CAP_EXPORT_TO_STR                                 "Export To:"
#define CAP_IMPORT_FROM_STR                               "Import From:"
#define CAP_FRM_EXPORT_STR                                "Profile Settings to be Exported"
#define CAP_FRM_IMPORT_STR                                "Profile Settings to be Imported"
#define CAP_CHK_ALL_EXPORT_STR                            "Export All Settings"
#define CAP_CHK_ALL_IMPORT_STR                            "Import All Settings"
#define CAP_BTN_EXPORT_STR                                "Export Selected Settings"
#define CAP_BTN_IMPORT_STR                                "Import Selected Settings"

#define INFO_HELP_NOT_AVAILABLE_STR                       "Sorry, the help function is not available yet."

#define INFO_EXPORT_FINISH_STR                            "The selected settings have been successfully exported to the defined directory."
#define INFO_IMPORT_FINISH_STR                            "The selected settings have been successfully imported. In order to apply the new settings, OpenTM2 will be automatically restarted. Please press the button \"OK\"."
#define INFO_IMPORT_CONFIRM_STR                           "For backup purposes, the existing settings will be copied to the directory \\otm\\plugins\\bak\\. If you continue with \"Yes\", OpenTM2 will be automatically restarted."

#define WARN_FILE_EXISTS_STR                              "The Profile Settings name %s already exists. Do you want to overwrite this Profile Setting name?"

#define ERROR_TAR_DIR_STR                                 "The folder of the target file is invalid, please check."
#define ERROR_TAR_FILE_NAME_STR                           "The file name of the target file is invalid, please check."
#define ERROR_OTM_FILE_OPEN_A_STR                         "Failed to open the file."
#define ERROR_OTM_FILE_NOT_FIND_A_STR                     "Failed to find the file."
#define ERROR_FILE_NOT_EXIST_STR                          "Target file is not existed, please check."
#define ERROR_READ_SYS_PROP_A_STR                         "Failed to read the system properties file."
#define ERROR_SAVE_SYS_PROP_A_STR                         "Failed to save the system properties file."
#define ERROR_OTM_XERCESC_INITIAL_A_STR                   "Failed to initial xercesc."
#define ERROR_OTM_XERCESC_CREATE_A_STR                    "Failed to create xml file by xercesc."
#define ERROR_OTM_XERCESC_EXPORT_A_STR                    "Failed to export xml file by xercesc."
#define ERROR_OTM_XERCESC_MEM_A_STR                       "Exception of OutOfMemoryException in xercesc."
#define ERROR_OTM_XERCESC_DOM_A_STR                       "Exception of DOMException in xercesc."
#define ERROR_OTM_XERCESC_UNKNOW_A_STR                    "Exception of unknown in xercesc."
#define ERROR_READ_PROFILE_SET_FILE_A_STR                 "Failed to read profile set file."
#define ERROR_UNKNOWN_STR                                 "Unknown error occurred in the processing (%d)."
#define ERROR_OPEN_PROFILE_SET_DIALOG_A_STR               "Failed to open the profile setting dialog (%d)."
#define ERROR_OTM_NO_MORE_MEMORY_A_STR                    "There is no more memory, please check."
#define ERROR_OTM_CREATE_FOLDER_A_STR                     "Failed to create the folder."
#define ERROR_READ_EDITOR_PROP_A_STR                      "Failed to read the property file of translation editor."
#define ERROR_BACKUP_PROFILE_A_STR                        "Failed to backup the profile."
#define ERROR_TAR_DIR_A_STR                               "Target directory is not correct."
#define ERROR_TAR_FILE_NAME_A_STR                         "Target file name is not correct."
#define ERROR_READ_FONT_INFO_A_STR                        "Failed to read the font info."
#define ERROR_READ_WORKBENCH_INFO_A_STR                   "Failed to read the workbench info."
#define ERROR_SAVE_WORKBENCH_INFO_A_STR                   "Failed to save the workbench info."
#define ERROR_READ_GLOBAL_FIND_INFO_A_STR                 "Failed to read the global find info."
#define ERROR_SAVE_GLOBAL_FIND_INFO_A_STR                 "Failed to save the global find info."
#define ERROR_READ_BATCH_LIST_INFO_A_STR                  "Failed to read the batch list info."
#define ERROR_SAVE_BATCH_LIST_INFO_A_STR                  "Failed to save the batch list info."
#define ERROR_READ_NFLUENT_INFO_A_STR                     "Failed to read the EQFNFLUENT.TRG info."
#define ERROR_SAVE_NFLUENT_INFO_A_STR                     "Failed to save the EQFNFLUENT.TRG info."
#define ERROR_READ_SHARED_MEM_ACCESS_INFO_A_STR           "Failed to read the shared memory access info."
#define ERROR_SAVE_SHARED_MEM_ACCESS_INFO_A_STR           "Failed to save the shared memory access info."
#define ERROR_READ_SHARED_MEM_CREATE_INFO_A_STR           "Failed to read the shared memory create info."
#define ERROR_SAVE_SHARED_MEM_CREATE_INFO_A_STR           "Failed to save the shared memory create info."
#define ERROR_READ_LST_LAST_USED_INFO_A_STR               "Failed to read the list last used value info."
#define ERROR_SAVE_LST_LAST_USED_INFO_A_STR               "Failed to save the list last used value info."
