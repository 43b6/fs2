#include <ansi.h>
inherit F_CLEAN_UP;
inherit F_GUILDCMDS;
int main(object me, string arg)
{
	object obj,ob;
	string st1,st2;
	if(!arg||sscanf(arg,"%s in %s",st1,st2)!=2)
		return notify_fail("ָ���ʽ��putpoison <��> in <��Ʒ>\n");
	if(!(ob=present(st1,me)))
		return notify_fail("�������û�����ֶ���\n");
	if(!(obj=present(st2,me))&&st2!="water"&&environment(me)->query("resource/water")!=1)
		return notify_fail("����û���������\n");

	if(obj==me) return notify_fail("���Լ��¶� ?\n");
	if(!ob->query("poison_type"))
		return notify_fail("���Ƕ��� ?\n");
	
	message_vision(
	"$N����������"+obj->name()+"�¶���\n",me);
	ob->add_amount(-1);
	obj->set("get_poison",ob->query("poison_type"));
	obj->set("poison_power",ob->query("poison_power"));
	return 1;
}
 
int help(object me)
{
   write(@HELP
 
ָ���ʽ��putpoison <��> in <��Ʒ>
 
˵������ĳ��Ʒ���¶���
 
HELP
   );
   return 1;
}
