
inherit NPC;

void create()
{
        set_name("�ϴ���",({"boat man","man"}));
        set("long","һλ�����ϡ������ , ���۵����ž��� !\n");
        set("gender","����");
        set("combat_exp",300000);
        set("attitude","heroism");
        set("age",20);
        set("str",30);
        set("cor", 30);
        set("per", 25);
        set("int", 30);
        set("cps",20);
        set("con", 30);
        set("spi", 15);
        set("kar", 30);
        set_skill("unarmed",300);
        set_skill("dodge",200);
       set_skill("parry",260);
        set("chat_chance",20);
        set("chat_msg",({
        "�����Ĵ��Ŵ��� , ����һ����ĺ��� !\n",
        "���ߴ�������ĺ�����������Ľ���������Ȼ���� !\n",
        "������ȥ��һƬ�ı̺����� , ���������� !\n",
        }));
        setup();
        add_money("coin",100);
}
 int accept_kill(object me)
 {
        return notify_fail("����˵�� : ��Ȼ����ҾͲ�������!\n");
  }
 int accept_fight(object me)
 {
         return notify_fail("����̾�� : ����û������������\n");
 }



