// Room: /open/su/room/suroad9_1.c

inherit ROOM;

void create ()
{
  set ("short", "�ϻʴ��");
  set ("long", @LONG
�����ɽ��ɵĴ�������λ��ʿ������վ�����࣬������ĳ��裬
ȫ����̴ľ��ɣ�����һ��׳����ȷ��һ��Ī����Ӣ����Ψһ���㲻����
��������˵�λ���ϣ�ȴ���������� �� ֣ʿ�����������ϡ��������ʦ
�Ļ�ֻ���������ҵĽ�ʿ���ˡ�
��
LONG);

  set("light_up",1);
  set("exits", ([ /* sizeof() == 3 */
  "north" : "/open/gsword/room/g1-3.c",
  "out" : "/open/gsword/room/test.c",
  "south": "/open/gsword/room/roomf",
  "east" : "/open/gsword/room/g1-2.c",
]));

  set("objects", ([ /* sizeof() == 2 */
  "/open/gsword/npc/swordsman" : 2,
  "/daemon/class/swordsman/chenfon" :1 ,
]));

   set("valid_startroom", 1);
    set("light_up", 1 );

  setup();
}
