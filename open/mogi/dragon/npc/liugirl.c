inherit NPC;
string do_act();
string do_acc();
string do_aca();
string do_acb();
string ask_tesin();
void create()
{
        set_name("������",({"liu hey-shun","liu"}));
        set("gender","Ů��");
        set("age",30);
        set("class","fighter");
        set("str",30);
        set("long","���ұ�ֵڶ�����,Ҳ���������Ů���� .\n");
        set("chat_chance",10);
        set("inquiry",([
        "������" : (:ask_tesin:),
        "�ַ�" : (:do_act:) ,
        "����" : (:do_aca:) ,
        "����" : (:do_acc:) ,
        "֣����" : (:do_acb:) ,
        ]));
        add_action("do_act","act");
        add_action("do_acc","acc");
        add_action("do_aca","aca");
        add_action("do_acb","acb");
        set("combat_exp",1000000);
        setup();
        add_money("silver",1);
}
int accept_fight(object who)
{
 return notify_fail("������˵:����������ϧ�񰡡�\n");
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
        command("cry ");
}
  string do_act()
{
        command("say ��.�ҵ���λ����֮ʿ������ǰ��������λ�б����ˡ�֣���š� ");
        command("say ���岻�ݴǵĴ�������ֵ���ȥ�����е���");
        command("say ��������ս��������ҹ�������޷�սʤ����׳�������ˡ�");
        command("say ��������������������ҡ����⡱��Կ�ס�");
        command("say �Һ����游�ס����𡱣������Լ�û�书��Ҳ�����û�Կ�ס�");
        command("say �Ҿ���Ϊ�˱��𣬱��ű����ľ�������ħ�磬����Ѱ��ʿ��");
           
 }
string ask_tesin()
{
if (this_player()->query("quests/shasword")>=2 && this_player()->query("quests/shasword")<5)
{
this_player()->set("quests/shasword",5);
return ("ʮ����ʮ��ǰ,�������������������������۷��..����������������ڵĻ�..�ǲ�֪���ж��.");
}
}
string do_acc()
{
command("say �Ǳ�����������ȵ����档");
        command("say ��������ɱ�����������Լ�����Կ��ȡ����ȥ�ɡ�");
}

string do_aca()
{
    command("say ֻ��Թ�Լ�û�书����");
    command("say ����...ֻҪ�������ұ���..�Ǳ�����ı���͵���л��ɡ�");
}

string do_acb()
{
   command("say ��!ɱ�����ˣ��������졣");
   command("say �����Բб�����ɱ�����Ѿ��кܶ�׳ʿΪ���ַ�����һȥ���ء�");
   command("say �������������ȵĹ�����");
}
