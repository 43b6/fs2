inherit ROOM;

void create ()
{
  set ("short", "LPC ˵��֮ ��� -- area");
  set("long", @LONG

һЩ�ɴ���������������, ͨ��ʹ�� LPC ����Ҫ����--�̳�--������ mudlib
���������(����)�������Ϸ�������ʹ�õ��������, ��Щ�������������
����.
LONG);

  set("exits", ([
	"back"	: __DIR__"doc",
  ]) );
  setup();
}
