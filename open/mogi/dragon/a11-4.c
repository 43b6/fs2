// Room: /u/p/poloer/dragon/a11-4
inherit ROOM;

void create ()
{
  set ("short", "������");
  set ("long", @LONG
   һ���ǳ���С��ͨ����ֻ����һ����ͨ���Ŀ�ȣ�
       ͨ��ʪ���׻�����ˮ�ء���ô����ͨ��������ط�
       ��? �������¿�����ʲô�����ɡ�
            ������ã�����ǰ������΢С�ĵƹ⡣

LONG);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "north" : __DIR__"a11-5",
  "east" : __DIR__"a11-3",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
