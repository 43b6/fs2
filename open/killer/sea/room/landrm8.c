inherit ROOM;

void create ()
{
  set ("short", "���ɵ�����");
  set ("long", @LONG
��

	��ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	���ɵ��۾�����Ķ��ߣ�ˮ��Ҳ�ӽ������ˡ�
	���ãã�Ĵ󺣣������в����е㵣�ġ�
	
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"landrm7.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/killer/sea/npc/cok_fish.c" : 2,
]));
  set("light_up", 1);

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
 me->add("kee",-10);
 return 1;
}
