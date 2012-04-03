// nick.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string tmp;

  if (!arg) return notify_fail("��Ҫ���Լ�ȡʲô�ºţ�\n");
  tmp = remove_color (arg);
  if( strlen(tmp)> 20)
    return notify_fail ("��Ĵº�������̫�ŵĹ��Ų�����һ����һ��ġ�����һ��ġ�\n");

// Ӧ����ȡ���ºŰ�... edit by lys
	if (arg == "none") {
		me->delete("nickname");
		write ("��Ĵº�ȡ����.\n");
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
ָ���ʽ : nick <���, �º�>
ָ��˵�� :
           ���ָ���������Ϊ�Լ�ȡһ�����������Ż�ͷ�Σ������ϣ����
         �º���ʹ�� ANSI �Ŀ�����Ԫ�ı���ɫ�����������µĿ����ִ���

��ͨɫ			�� HI - ������	�� B ����	�� HB �����ȱ���

$BLK$ - ��ɫ				$BBLK$ - ��ɫ
$RED$ - ��ɫ		$HIR$ - ����ɫ	$BRED$ - ��ɫ	$HBRED$ - ����ɫ
$GRN$ - ��ɫ		$HIG$ - ����ɫ	$BGRN$ - ��ɫ	$HBGRN$ - ����ɫ
$YEL$ - ����ɫ		$HIY$ - ��ɫ	$BYEL$ - ����ɫ	$HBYEL$ - ��ɫ
$BLU$ - ����ɫ		$HIB$ - ��ɫ	$BBLU$ - ����ɫ	$HBBLU$ - ��ɫ
$MAG$ - ǳ��ɫ		$HIM$ - �ۺ�ɫ	$BMAG$ - ǳ��ɫ	$HBMAG$ - �ۺ�ɫ
$CYN$ - ����ɫ		$HIC$ - ����ɫ	$BCYN$ - ����ɫ	$HBCYN$ - ����ɫ
$WHT$ - ǳ��ɫ		$HIW$ - ��ɫ	$BWHT$ - ǳ��ɫ	$HBWHT$ - ��ɫ
$NOR$ - �ָ�������ɫ

����ϵͳ�Զ������ִ�β�˼�һ�� $NOR$��
HELP
        );
        return 1;
}
