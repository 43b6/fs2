inherit ROOM;

void create()
{  
   
   set("short","����");
   set ("long", @LONG��

	��ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	��Ȼ��ˮ����԰�������ˮ���ƶ������ǲ�������û���˻ṥ���㣡
	Ŀǰ�������㲢���Ǻ�Զ�����Ǻ��е������Ѿ��ܶ��ˡ�����
	���������������ڵ����ţ��뵽�Լ����������򸡱�е�һ����į�С�����

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "north" : __DIR__"fonrm1.c",  	
       "east" : __DIR__"fonrm3",  	
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/stone_fish.c":1,
      "/open/killer/sea/npc/angler_fish.c":1,
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