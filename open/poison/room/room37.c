inherit ROOM;

void create ()
{
  set ("short", "СϪ��");
  set ("long", @LONG
˳��СϪ��ǰ�� ,ǰ����һСƬ���� ,���㲻���������ն��µ�
���� :����ʹ���� .������λ���ĺ� ,�㲻�Ծ��������˴�����
�õĶ����� ,�����Լ�΢����С�� ,�� ,����ʹ��������һ��Ҳ
���ٰ� !

LONG);

  set("exits", ([ /* sizeof() == 2 */
  "southeast" : __DIR__"room27",
  "north" : __DIR__"room38",
]));
  setup();
}


