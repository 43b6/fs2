// wizlist.c

inherit F_CLEAN_UP;
#include <ansi.h>
int main(object me, string arg)
{
	string *list;
	int my_level, i, j;
	int ch;
	object ob;

	list = sort_array(SECURITY_D->query_wizlist(), 1);
   write(MUD_NAME + "Ŀǰ������ع�һ���� "+ (sizeof(list)-1) + " λ��(ǰ���� * �߱���������)\n");
	my_level=wiz_level(me);
        printf("----------------------------    "+HIW+" ���        �ػ�"+NOR+"   ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(manager)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/����") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------  "+HIM+"����ħ��    ��ɷŮ��  "+NOR+"----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(guest)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/����") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
printf("\n----------------------------    "+HIC+"���       ������"+NOR+"   ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(admin)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/����") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------    "+HIY+"����       ҹ����   "+NOR+"----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(arch)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/����") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------    "+HIG+"����        �й�"+NOR+"    ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(wizard)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/����") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------    "+HIR+"����        �޳�"+NOR+"    ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(apprentice)")
	{
		ch = ' ';
		if(ob=find_player(list[i]))
			if(wizardp(me))
			if(!ob->query("env/����") || wiz_level(ob) <= my_level)
				ch = '*';
		printf("%c%-10s%s", ch, list[i], ((j++)%7==6) ? "\n  " : "");
	}
        printf("\n----------------------------  "+HIB+"����콫    ţͷ����"+NOR+"  ----------------------------\n  ");
	for(i=0, j=0; i<sizeof(list); i++)
	if(SECURITY_D->get_status(list[i])=="(immortal)")
		printf("%c%-10s%s", (find_player(list[i])) ? ch:' ', list[i], ((j++)%7==6) ? "\n  " : "");
	write("\n");
	return 1;
}

int help(object me)
{
  write(@HELP
ָ���ʽ : wizlist
ָ��˵�� :
           ��ָ�������鿴Ŀǰ����ռ��ܹ��ж��ٸ���ʦ��
HELP
    );
    return 1;
}
