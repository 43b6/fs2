//written by acelan...../u/a/acelan/ghost/room/ghost32.c

inherit ROOM;

void create()
{
        set("short", "�ڷ����ܲ�");
        set("long", @LONG
�����Ǻڷ�����ܲ�, �ڷ���Աһ������ɫľȻ, �������Ĳ���
��, ���ܿյ�����, ����ǽ�϶��˼���ǧ�ź���, ����������������
, �����ڷ��鲢����ԣ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east"  : __DIR__"ghost33.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/black2.c" : 1,
  "/open/killer/mon/ghost/npc/black3.c" : 1,
]));

   setup();
}

