inherit ROOM;

void create()
{  
   
   set("short","����");
   set ("long", @LONG��

	��ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	���Ϸ�ƽ�˾������Ϸ�����������а�����ӿ��
	Ȼ����Ϊ��ˮ�����������������˿���о�����������в��
	���ǵ����ʱ�������޳����ˣ���ʵ���Ǻ���ѽ����
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "west" : __DIR__"landrm7.c",  	
       "east" : __DIR__"landrm5.c",  	
]));
set("objects", ([ /* sizeof() == 1 */
      "/open/killer/sea/npc/sail_fish.c":1,
      "/open/killer/sea/npc/gull.c":1,
      "/open/killer/sea/npc/auklet.c":1,
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
me->add("kee",-5);
 return 1;
}