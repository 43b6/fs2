//written by acelan...../u/a/acelan/ghost/room/ghost23.c

inherit ROOM;

void create()
{
        set("short", "ʯ��");
        set("long", @LONG
��ǰ������һ��ʯ��, ����ɭɭ, �����˵���, ʯ���Ͼ�Ȼ����
һ̲Ѫ��, �������ַ�������ɢ����Ů����С��С��, ��һЩ�·���
Ƭ, ��Ȼ������һŮ�Ӱ�����, ���˲�������, ë���Ȼ��
LONG);
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost16.c",
       "east"  : __DIR__"ghost24.c",
       "west"  : __DIR__"ghost22.c",
   ]));
set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/bghost.c" : 1,
]));
   setup();
}
