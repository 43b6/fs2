inherit NPC;
string do_act();
string do_aca();
string do_acb();
string do_acc();
void create()
{
        set_name("����",({"old man","man"}));
        set("gender","����");
        set("age",70);
        set("str",30);
        set("long","һλ�׷���ɣ�����ˡ�\n");
        set("chat_chance",10);
        set("inquiry",([
        "������" : (:do_acc:),
        "���" : (:do_act:) ,
        "�ƹ�" : (:do_aca:) ,
        "����" : (:do_acb:) ,       
]));
        add_action("do_act","act");
        add_action("do_aca","aca");
        set("combat_exp",1000000);
        setup();
        add_money("silver",1);
}
int accept_fight(object who)
{
 return notify_fail("����˵:�����ᾴ��������?����û�������ˡ�\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) 

        {
        remove_call_out("greeting");
        call_out("greeting",2,obj);
        }
}
void greeting(object ob)
{
        command("say ������? ");
}
  string do_act()
{
        command("say ����ʶ���������ǰ���㹭�������������ġ� ");
        command("say ����������û�ڡ��ƹ����ˣ������Ѹ߆���");           
}

string do_aca()
{
    command("say ʲô?���Ҫ�Ұ������ѹ�?!");
    command("say hmm");
    command("say �������������ϣ��Ͱ������ɣ����������С��������ġ�\n");
}
string do_acb()
{
  command("say �Һ�ϲ���������Ե��ǰ����չ��������ܰ���ȡ�أ��ض�������õĹ���");
  command("say ����Ϊл��\n");
}
string do_acc()
{
command("say ������������������źܾ�û�Æ���");
command("say ˵������������ֻ�С���㡱һλ֪������ѽ��\n");
}
