// Room: /open/gsword/room/eghouse2.c
inherit ROOM;

void create()
{
  set ("short", "�޾�");
  set ("long", @LONG
���ǽ����½��ǵ��޾ӣ����ڸհ������£���ֵ�λ�ϵͣ������
�޾�Ҳ����ļ�ª��һ�ż����Ĵ�ͨ�̣����ſ������Σ�������
�ӵ�ȫ�����ϱ��Ǳ��ֽϸߵ�ʦ���ǵ�ס����
LONG);

  set("exits", ([ /* sizeof() == 2 */
  "south" : __DIR__"eghouse3",
  "north" : __DIR__"eghouse1",
]) );

  setup();
}
