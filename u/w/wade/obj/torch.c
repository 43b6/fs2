// torch

inherit ITEM;

void create()
{
        set_name("ľͷ", ({ "torch", }) );
        set("unit", "��");
        set("long", "һ�����Ե����յ�ľͷ��\n");
	// light_up ���� 0 ��ʾ����ȼ�յ�������
	set ("light_up", 1000);
	set("value", 10);
}

void init()
{
  add_action("ip", "ip");
}

int ip(string arg)
{
  string	okip = "140.122.*";
  string	ip1, ip2, ip3, ip4, ip5;

  sscanf (okip, "%s.%s", ip1, ip2);
  printf ("������λַ�� %s : %s\n", ip1, ip2);
  return 1;
}
