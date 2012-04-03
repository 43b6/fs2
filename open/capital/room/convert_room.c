// Room: /open/capital/room/convert_room.c
inherit ROOM;

void create ()
{
  set ("short", "ս����");
  set ("long", @LONG
������ս��ٵİ칫�ң���νս�飬����˼�����ս�����Σ���
�����ƣ�֪��֪�ˣ���ս��ʤ������ǰ��̽�Ӷ�����������ر�ս��
���������ս���ϵ�ս������һ���ĳ̶ȣ���ôս��ٱ���������
���Ľ�����

LONG);

  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"r05.c",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/capital/npc/gy.c" : 1,
]));
  set("no_fight", 1);
  set("light_up", 1);
  set("no_magic", 1);

  setup();
}
void init()
{  add_action("do_team","team"); }
int do_team(){
   object me=this_player();
   tell_object(me, "�� ���е�����Ҫ�������� team,���� team ���ˡ�\n");
   return 1;
}
