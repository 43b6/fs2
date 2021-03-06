// nick.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string tmp;

  if (!arg) return notify_fail("你要替自己取什么绰号？\n");
  tmp = remove_color (arg);
  if( strlen(tmp)> 20)
    return notify_fail ("你的绰号真像老太婆的裹脚布，想一个短一点的、响亮一点的。\n");

// 应该能取消绰号吧... edit by lys
	if (arg == "none") {
		me->delete("nickname");
		write ("你的绰号取消了.\n");
		return 1;
	}
	arg = trans_color(arg);

	me->set("nickname", arg + NOR);
	write("Ok.\n");
	return 1;
}

int help(object me)
{
        write(@HELP
指令格式 : nick <外号, 绰号>
指令说明 :
           这个指令可以让你为自己取一个响亮的名号或头衔，你如果希望在
         绰号中使用 ANSI 的控制字元改变颜色，可以用以下的控制字串：

普通色			加 HI - 高亮度	加 B 背景	加 HB 高亮度背景

$BLK$ - 黑色				$BBLK$ - 黑色
$RED$ - 红色		$HIR$ - 亮红色	$BRED$ - 红色	$HBRED$ - 亮红色
$GRN$ - 绿色		$HIG$ - 亮绿色	$BGRN$ - 绿色	$HBGRN$ - 亮绿色
$YEL$ - 土黄色		$HIY$ - 黄色	$BYEL$ - 土黄色	$HBYEL$ - 黄色
$BLU$ - 深蓝色		$HIB$ - 蓝色	$BBLU$ - 深蓝色	$HBBLU$ - 蓝色
$MAG$ - 浅紫色		$HIM$ - 粉红色	$BMAG$ - 浅紫色	$HBMAG$ - 粉红色
$CYN$ - 蓝绿色		$HIC$ - 天青色	$BCYN$ - 蓝绿色	$HBCYN$ - 天青色
$WHT$ - 浅灰色		$HIW$ - 白色	$BWHT$ - 浅灰色	$HBWHT$ - 白色
$NOR$ - 恢复正常颜色

其中系统自动会在字串尾端加一个 $NOR$。
HELP
        );
        return 1;
}
