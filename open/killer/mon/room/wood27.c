//written by acelan...../u/a/acelan/room/wood27.c

inherit ROOM;

void create()
{
        set("short", "�����ϵ��ܵ�");
        set("long", @LONG
��һ�ɾ޴�ķ�, ͻȻ������ٿȻ��ʧ, ��ɫ˲�䰵����������
���ظ�����, �ƺ��ڶ̶̵ļ������ڹ���һ��һҹ, ��̧��ͷ������
��, ����Զ����һֻ�������Ժ��˵��ٶ�, ���Ϸ���ȥ��
LONG
        );
   set("exits", ([ /* sizeof() == 1 */
       "east" : "/open/killer/mon/room/wood28.c",
       "south" : "/open/killer/mon/room/wood21.c",
   ]));
   set("objects", ([ /* sizeof() == 1 */
       "/open/killer/mon/npc/grnnpc2.c":1,
   ]));

   set("no_clean_up", 0);

   setup();
}
