//room:/open/dancer/room/roomsw3n.c :cgy

inherit ROOM;

void create ()
{
  set ("short","ҩ��" );
  set ("long", @LONG

������ҹ��С����ҩ�����������ŵ�������Ĳ�ҩ���㣬
���ھ��µ�ɽ�ֲݵ�����ʸ��ֵĲ�Ҫ��˵��Ӧ�о��о�����
ϣ�е�ҩ�ݿ���Ҳ����������!!���������ҩ��������������
֮�С�

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "south"     :"/open/dancer/room/roomsw3.c",
  
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/yi.c" : 1,
]));

  setup();

}
