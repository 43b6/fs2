// say.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
	if (!arg) {
		write("���������ﲻ֪����˵Щʲô��\n");
		message("sound", me->name() + "�������ﲻ֪����˵Щʲô��\n",
			environment(me), me);
		return 1;
	}
	if( (int)me->query("kee") < (int)me->query("max_kee") / 5 ) {
		arg = replace_string(arg, " ", " ... ") + " ...";
	}

	arg = trans_color(arg);

write("��"+HIG+"��̸"+NOR+"��"+HIY+"��˵��: " + arg + "\n"NOR); 
say("��"+HIG+"��̸"+NOR+"��"+HIY+me->name() + "˵��: " +  arg + "\n" NOR, 
		environment(me), me);
	return 1;
}

int help (object me)
{
	write(@HELP
ָ���ʽ : say <ѶϢ>
ָ��˵�� : 
           ˵�������и�����ͬһ��������˶���������˵�Ļ���
 
ע : ��ָ����õ����� ' ȡ����
HELP
	);
	return 1;
}
