//written by acelan...../u/a/acelan/ghost/room/ghost35.c

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
       "west"  : __DIR__"ghost34.c",
   ]));
   set("no_clean_up", 0);

   setup();
}

