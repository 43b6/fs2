// c_goto.c by ACKY 03/22/00

inherit F_CLEAN_UP;
#include <ansi.h>

int main(object me, string arg)
{
	object obj, room;
	if( me->query("clan/rank") > 3 )
		return notify_fail("����Ȩʹ�ô�ָ�\n");
	if( !CLAN_D->is_clan_room(me) )
		return notify_fail("�˴����ǹ��֮���̡�\n");
	if( me->is_fighting() )
		return notify_fail("����æ��ս����\n");
	if( CLAN_D->clan_query(me->query("clan/id"),"gold") < 100000 )
		return notify_fail("���ɴ������Ҫ��ʰ�����ƽ�\n");
	if( !arg )
		return notify_fail("ʹ�÷�ʽ��c_goto <����ID>\n");
	sscanf(arg, "%s", arg);
	obj = find_player(arg);
         if(obj && wizardp(obj))
        return notify_fail("��λ����Ŀǰ��������ม�\n");


//	if(!obj) obj = find_living(arg);
//	if (!obj) obj=LOGIN_D->find_body(arg);
	if(!obj)
		return notify_fail("��λ����Ŀǰ��������ม�\n");
	if( CLAN_D->what_clan_area(obj)!=me->query("clan/id") )
		return notify_fail("��������֮�����ǹ��֮���̡�\n");
	room = environment(me);
	tell_room(room,HIC"ֻ��һ���������"+me->query("name")+"����Ӱ�Ѿ������ˡ�\n"NOR, me);
	if( obj && wizardp(obj))	{
		write("�䡫��"+obj->query("name")+"���������㷴��������");
		return 0;
	}
	me->move(environment(obj));
	room = environment(me);
	tell_room(room,HIC""+me->query("name")+"����ӰͻȻ������һ������֮�С�\n"NOR, me);
	return 1;
}

int help( object me )
{
	write("
   c_goto         �������ƶ���������ߡ�

                                                         by ACKY 2000/03/22
");
	return 1;
}
