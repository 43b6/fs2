// Room: /u/m/moner/tree/room26.c
inherit ROOM;

void create()
{
  set ("short", "����");
  set ("long", @LONG

����һ����խ�����ң����ڽ���һ��ʯ��������ǽ�ԡ�ʯ�ҵ��춥��
��һ���ƶ�����Ŀ��������Ϸ�����룬ӳ�Ź��ߣ��������Ŀ������ܣ�
�������ܣ��㾪�ȵķ��������������ۣ�ϸϸ�Ĺ۲���Щ���ۣ���������
���Ǹ�����Ϊ��

LONG);

  set("light_up", 1);
        set("objects",([
"/daemon/class/blademan/master_oldman.c":1,
]));

  set("exits", ([ /* sizeof() == 2 */
"out" :"/open/snow/room/hole13.c",
]));
  setup();
}
