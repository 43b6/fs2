#include <ansi.h>
inherit ITEM;
inherit F_GUILDCMDS;
void create()
{
        set_name("������", ({ "wind roll","roll","wind"}) );
        set_weight(800);
        if( clonep() )
                set_default_object(__FILE__);
        else 
	{
                set("unit", "��");
		set("value", 10);
		set("long",@LONG
         ����һ������ʹ�������˴󷨵ľ���,ר���ṩ��ɱ��Ǳ���������,
         ���ǣ���˵ֻ��������ų�����һ�����ᣬһ��ɱ�ֲ�û�����־��ᡣ
 
      �ֽ��ṩ�ĸ�����: 1. ��֮������  2. ��֮������ 
			3. ˮ֮������  4. ��֮������ 
                        5. ���������ڵ�       
	û��ͨ���Ĵ������Ļ�������޷����㴫�͵����������ڵ�
 
      �ƶ�������windrun <number>
LONG);
        }
}

void init()
{
        if( environment() == this_player() )
	{
        add_action("do_windrun", "windrun");
	}
}

int do_windrun(string arg)
{ 
    mixed count;
    int money,i,gmove;
    object me,roomm;

    string room="";
    me = this_player();
    if( me->query("class") != "killer")         return 0;
    if( me->query_temp("head") != 6)		return 0;
    if( me->query_temp("unconcious") )          return 0;
    if( me->is_fighting() )
        return notify_fail("ս�����޷�ʹ�á�\n");
    if( environment(me)->query("no_transmit") )
    {
      message_vision( HIG+"ֻ������ð�������$N��ǰһ����Ȼ������\n"+NOR ,me);   
       return 1;
    }

    message_vision( HIG+"ֻ������ð�����һӵ���ϣ���$N��ǰһ��.\n"+NOR ,me);   
    switch(arg)
    {
       case "1":
         room="/open/killer/headkill/room/testrm1.c";		break;
       case "2":
         room="/open/killer/headkill/room/testrm2.c";		break;
       case "3":
         room="/open/killer/headkill/room/testrm3.c";		break;
       case "4":
         room="/open/killer/headkill/room/testrm4.c";		break;
       case "5":
	{
	 if (me->query_temp("kill_ghost") >= 4)
	 {
		me->set_temp("head",7);
	        room="/open/killer/headkill/room/bluerm1.c";		
	 }
	 else
         {
		room="";
		write(" ���˵: �����Ұ���ȥ�����أ�...\n");
		return 0;
         }
	 break;		
	}
       default:
   }
   if( !me->move(room) )
   {
	
	write(" ���˵: �����Ұ���ȥ�����أ�...\n");
	return 1;
   }
   return 1;
}
