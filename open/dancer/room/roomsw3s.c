//room:/open/dancer/room/roomsw3s.c :cgy

inherit ROOM;

void create ()
{
  set ("short","����" );
  set ("long", @LONG

������ҹ��С���ĳ������������ŵ�������ķ����㣬��
���ɾ��µ��ĵ����Ƴ���������������֮��һ�ֳ��ջ�����
�����޲����ڣ��ߵ��˴��㲻��ʳָ������һ�١�

LONG);

  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north"     :"/open/dancer/room/roomsw3.c",
  
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/dancer/npc/leing.c" : 1,
]));

  setup();

}
