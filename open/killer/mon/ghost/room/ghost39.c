//written by acelan...../u/a/acelan/ghost/room/ghost39.c

inherit ROOM;

void create()
{
        set("short", "�ڷ����鳤����ս�Ĺ뷿");
        set("long", @LONG
�����Ǻڷ����鳤����ս�Ĺ뷿, ���ڰ����, ����һ�Ŵ���
Բ����, ��ֻ��ǽ�Ϲ�ٺ�ŵ�������, �����δȼ��, �����ڷ�����
������ս�ƺ������˲��ٵĿ�����, �������ڱ��볣������ݷ�
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "south" : __DIR__"ghost37.c",
   ]));
   set("no_clean_up", 0);
 set("objects", ([ /* sizeof() == 1 */
  "/open/killer/mon/ghost/npc/chen.c" : 1,
]));

   setup();
}
