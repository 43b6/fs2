// Room: /u/p/poloer/dragon/a11-2
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
set("light_up", -1);

  set("no_transmit", 1);
  set("exits", ([ /* sizeof() == 2 */
  "west" : __DIR__"a11-3",
  "up" : __DIR__"a11-1",
]));
  set("evil", 1);
  set("no_auc", 1);

  setup();
}
