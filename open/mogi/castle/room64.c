// by roger ���� war by ACKY
inherit ROOM;
#include <ansi.h>
void create () {
	set( "short" , HIR"����ħ��"NOR);
	set( "long"  , "
    �������ħ��������! ����ǳ��Ŀ�, ���еĲ��ö����ֻ�
��ɫ, �����ž;���һ�����ȵ���Ϣ����Ϯ��, ���еı���������
һ��ȫ��ɢ���Ż������, ȫ����׻���, ������������Ƕ��۾�
��Ȼ�ֱ������������, ͸���ޱȵ�����, ���˲�������η��, 
����Ϊ֮���!
");

        set("evil", 1);
        set("king-room",1);
        set("no_auc", 1);
        set("no_transmit", 1);
        set("light_up",-1);
        set("exits", ([ 
            "west"  : __DIR__"room63",
            "north"  : __DIR__"room66",
            "south"  : __DIR__"room65",
      ]));

        set("objects",([ /* sizeof() == 1 */
   __DIR__"npc/fire-king" : 1,
      ]));

        setup();
}

int valid_leave(object me, string dir)

{
        if(dir=="north"&&present("king",environment(me)))
  {

message_vision(HIY"����ħ���ȵ�:������������ǰ��������\n"NOR,me);

return 0;
}
return 1;
}

void war_start()
{
	shout( HIR"\n\n\n\tħ����ħ�����ħ��֮����ʼ��ŭ\n\n"+
		  "\t��ħ��ɱ������\n\n"+
		  "\tȺħ�뿪ħ�糯�˼�ɱȥ!\n\n\n\n"NOR );

	new("/open/mogi/dragon/npc/dragon-gold.c") ->move("/open/capital/room/r70");
	new("/open/mogi/castle/npc/seven-dark-4.c")->move("/open/capital/room/r70");
	new("/open/mogi/castle/npc/seven-dark-5.c")->move("/open/capital/room/r70");
	new("/open/mogi/castle/npc/seven-dark-6.c")->move("/open/capital/room/r70");
	new("/open/mogi/castle/npc/black-ghost.c" )->move("/open/gsword/room/su3");
	new("/open/mogi/castle/npc/seven-dark-1.c")->move("/open/gsword/room/su3");
	new("/open/mogi/castle/npc/seven-dark-2.c")->move("/open/gsword/room/su3");
	new("/open/mogi/castle/npc/seven-dark-3.c")->move("/open/gsword/room/su3");
	new("/open/mogi/castle/npc/white-ghost.c" )->move("/open/start/room/s5.c");
	new("/open/mogi/castle/npc/seven-dark-4.c")->move("/open/start/room/s5.c");
	new("/open/mogi/castle/npc/seven-dark-5.c")->move("/open/start/room/s5.c");
	new("/open/mogi/castle/npc/seven-dark-6.c")->move("/open/start/room/s5.c");
	new("/open/mogi/castle/npc/black-ghost.c" )->move("/open/ping/room/road4");
	new("/open/mogi/castle/npc/seven-dark-4.c")->move("/open/ping/room/road4");
	new("/open/mogi/castle/npc/seven-dark-5.c")->move("/open/ping/room/road4");
	new("/open/mogi/castle/npc/seven-dark-6.c")->move("/open/ping/room/road4");
	new("/open/mogi/castle/npc/white-ghost.c" )->move("/open/port/room/r3-1");
	new("/open/mogi/castle/npc/seven-dark-1.c")->move("/open/port/room/r3-1");
	new("/open/mogi/castle/npc/seven-dark-2.c")->move("/open/port/room/r3-1");
	new("/open/mogi/castle/npc/seven-dark-3.c")->move("/open/port/room/r3-1");	
}

