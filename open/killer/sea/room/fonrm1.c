inherit ROOM;

void create()
{  
   
   set("short","���ָ��⺣");
   set ("long", @LONG��

	���������Ƿ��ָ� ����ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	��Ȼ��ˮ����԰�������ˮ���ƶ������ǲ�������û���˻ṥ���㣡
	����������Լ�С��һ�㣬��Ϊ���������ˮ�п��������͸�ʳ��һ����

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
    "north" : "/open/dancer/room/fonport",
       "south" : __DIR__"fonrm2",  	
]));
 set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/brra_fish.c":1,
]));
 setup();
}

int valid_leave(object me, string dir)
{
  int max;
 object ob2;

 if ( !present("static_water",this_player()) )  //�������Ƿ��ж�ˮ��
 {//���û�ж�ˮ�飬�����޷���ˮ���ƶ�
	   message_vision("$N��Ȼû�˶�ˮ�飬�군�ˣ���.........\n",me);
	   message_vision("$N�ں���Ư��........\n", me);
	   me->add("kee",-20);
	   return 0;
}  
 //����ж�ˮ��ʹ������ͨ��
 return 1;
}
