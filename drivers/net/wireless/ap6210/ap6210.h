#ifndef __AP6210_H__
#define __AP6210_H__

#define AP6210_EMERG(...)	pr_emerg("[ap6210] "__VA_ARGS__)
#define AP6210_ALERT(...)	pr_alert("[ap6210] "__VA_ARGS__)
#define AP6210_CRIT(...)	pr_crit("[ap6210] "__VA_ARGS__)
#define AP6210_ERR(...)		pr_err("[ap6210] "__VA_ARGS__)
#define AP6210_WARN(...)	pr_warn("[ap6210] "__VA_ARGS__)
#define AP6210_NOTICE(...)	pr_notice("[ap6210] "__VA_ARGS__)
#define AP6210_INFO(...)	pr_info("[ap6210] "__VA_ARGS__)
#define AP6210_DEBUG(...)	pr_debug("[ap6210] "__VA_ARGS__)
#define AP6210_CONT(...)	pr_cont(__VA_ARGS__)

#endif  /* __AP6210_H__ */
