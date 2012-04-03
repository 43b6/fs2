// Room: /u/o/onion/workroom.c~
#include <room.h>

inherit ROOM;

void create()
{
	set("short", "��е�С��");
	set("long", @LONG
	
	һ��СС�ķ���,����Ķ���һЩ����,����е���Ȥ���Ƿ���������
	һ�Ŵ�����,������Ÿ�ʽ��������(book),�����㻹�ŵ���һ�������
	ζ�Ӵ��ߴ���,��ϸһ��ȴ��Ȼ����һ��[1m����ɽѩ�С�[0m(onions),��ɫ��
	���괫���˱ǵ���ζ..
	
LONG
	);

	set ("item_desc", 
	(["book" : "
	�㿴����Щ����������˵���ѧ,����,�߿�..�����������ԭ����,��
	�����Ե������[Onion]����...\n",
          "onions" : "
        ���ص�����,�����е�����--[1m����ɽѩ�С�[0m,��Ȼ���������,͸�������
        ����ѩ��,��΢�绹����Ĳ�����,�嵭����ζʹ���̲�ס��Ҫ�úõ�Ʒ��
        (sniff)һ��...\n"]));
      
        set("objects", ([
        "/u/o/onion/npc/noname": 1,
//      "/u/o/onion/npc/vendor": 1,
	 ]));	
        set("exits", ([ 
		"up" : "/open/ping/room/p1",
		"down" : __DIR__"fightroom",
		"north" : "/open/capital/room/SCH",
        	"west" : "/open/biau/room0",
		"south" : "/open/capital/room/D03",

        	"east" : "/open/wiz/hall1",
         ]));
        set("no_clean_up", 0);
        set("valid_startroom", 1);
                             
        setup();
                  }                                    
                                                              	 
	void init()
	{
	 add_action("do_sniff","sniff");
	}
	int do_sniff(string str)
	{
                object me = this_player();
                int max;
                
                    write("������ǰȥ, ����������һ�����,��...��������... \n"
                    +"�������������������澭����֮�ڴܶ�,��е�һ��״������ԭ��...\n");
		    me->reincarnate();
		    max = me->query("max_s_kee");
		    me->set("s_kee",max);		
                    max = me->query("max_gin");
                    me->set("eff_gin",max);
                    me->set("gin",max);
                    max = me->query("max_kee");
                    me->set("eff_kee",max);
                    me->set("kee",max);
                    max = me->query("max_sen");
                    me->set("eff_sen",max);
                    me->set("sen",max);
		    max = me->query("max_force");
		    me->set("force",max);
		    max = me->query("max_mana");
		    me->set("mana",max);	
                    max = me->max_food_capacity();
                    me->set("food",max);
                    max = me->max_water_capacity();
                    me->set("water",max);
                    me->clear_condition();
                     
                    tell_room(environment(me),(string)me->query("name")+
                    "�߽�[1m����ɽѩ�С�[0m,����һ��,����¶���Ҹ���Ц��.\n",({this_object(), me}));
                    return 1;
        }
