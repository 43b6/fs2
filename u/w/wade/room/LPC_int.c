#define WADE_HOME "/u/w/wade/workroom"

inherit ROOM;

void create ()
{
  set ("short", "LPC ���� -- ����");
  set ("long", @LONG
����������õ���������̬, ����Լ����� i++; ���ǰѱ��� i ��һ����˼,
����, i += 10; �� i = i + 10; ��һ������˼, ����, i = j = 0; ���ǰ�������
���ϲ�, �� i = 0; j = 0; �������� i = j = 0; ��һ����.
    ��ס, �������еĻ���, ����������������, ���Ե��µ�����:
        if (value > hp * 0.5) .....   ���Ը�д����, �ٶȻ�ȽϿ�
        if (value * 2 > hp) .......   ��Ϊ�õ�������������
LONG);

  set("exits", ([
        "back"  :       __DIR__"lpc",
  ]) );

  set("light",1);
  setup();
}
