inherit ROOM;

void create ()
{
  set ("short", "�⺣");
  set ("long", @LONG
��

	��ƾ���Ŷ�ˮ��������������������ڵ��ں�������
	Ȼ��Ϊ�˱�����·��ܿ�Σ�յش�����������ø��ź����ߡ�
	��Ȼ��ˮ����԰�������ˮ���ƶ������ǲ�������û���˻ṥ���㣡
	���������ƺ�ˮ����Խ��Խ�͵����ƣ�������ˮ�鲢û�б��µ�Ч����
	Ŀǰ�������㲢���Ǻ�Զ�����Ǻ��е������Ѿ��ܶ��ˡ�����

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "east" : __DIR__"landrm3",
  "west" : __DIR__"landrm1.c",
]));
  set("objects", ([ /* sizeof() == 2 */
  "/open/killer/sea/npc/auklet.c" : 2,
  "/open/killer/sea/npc/auk.c" : 1,
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
 return 1;
}
