// Room: /open/main/room/maiu-1.c
inherit ROOM;

void create ()
{
  set ("short", "���Խ���");
  set ("long", @LONG

���������׽��ϵĶ���,���׽���������µ������  �������������������
,����һ��,ֻ����ˮ����,�ǵ����������ˮ�߹�,   ��                ��
��������,Ҳδ�ضɵĹ������콭ˮ,��������һ��   ��    ��������    ��
����,�߸ߵĺ������.                           ��                ��
  ������ͨ��������                           ������������·�ˡ���

LONG);

  set("exits", ([ /* sizeof() == 4 */
  "north" : "/open/prayer/room/westarea/road37",
  "east" : __DIR__"r41",
  "south" : __DIR__"to_chun1.c",
  "west" : __DIR__"maiu-2",
]));
  set("objects", ([ /* sizeof() == 1 */
  "/open/ping/npc/murofu" : 1,
]));
  set("��Դ", ([ /* sizeof() == 1 */
  "Һ��" : ([ /* sizeof() == 3 */
      "ֹ��" : 30,
      "����" : "��ˮ",
      "����" : "ˮ",
    ]),
]));
  set("outdoors", "/open/ping");

  setup();
}
