
// by roger

inherit NPC;
int do_acc();
void create()
{      
        set("title","�ɽ��ɵڶ�������");
        set_name("�Ϲ��޼�",({"older"}));
        set("gender","����");
        set("age",90);
        set("str",30);
        set("long","�����ɽ��ɵڶ����������ţ���ʮ��ǰ�����Ŵ���֣ʿ����ӽ�������
����û�뵽���ڡ���ħ�ű����\n");   
        set("inquiry",([
        "��ħ�ű�" : "�ұ����ɽ����ţ�ǰ��Ѱ����ʦ�ܷ���������䣬û�뵽��Щ��ħʵ��̫�����ˣ������ǡ�����ħ������\n����������취���ӳ�ȥ����\n" ,
        "����ħ��" : (:do_acc:),
        "�ӳ�ȥ"   : "��ʦ�ܵ����ڹű����ҵ�һ�����ص㡱����ص�������ϱ����ұȽ����⣬ֻҪ��һ�������Ϳ��ӳ�ȥ��\n������ʦ�ܵ������˹��أ�������ӳ����ú��Ա�ץ�ء�\n",
        "�ص�"     : "�϶�¥�������������������ǣ���ڵĻ��Ϳ��߰�\n",
        "������" : "������ʦ�ܣ����б�����ʦ��ң��֮��һ��ѧ�������߾����������������������㽭����Ӧ��û����\n",
        ]));
        add_action("do_acc","acc");
        set("combat_exp",4000000);
        set("max_gin",3000);
        set("gin",10);
        set("max_kee",3000);
        set("kee",10);
        set("max_sen",3000);
        set("sen",10);

        setup();
        add_money("gold",5);
}
int accept_fight(object who)
{
 return notify_fail("�Ϲ��޼�˵:�ҿ�����...������ң�\n");
}
int accept_kill(object who)
{
 return notify_fail("�Ϲ��޼�˵:�ҿ�����...����ɱ�ң�\n");
}
void init() {
        object obj;

        ::init();
        if(interactive(obj=this_player()) && !is_fighting()) 

        {
        remove_call_out("greeting");
        call_out("greeting",1,obj);
        }
}
void greeting(object ob)
{
        command("sigh");
}
int do_acc()
{
object me;
me = this_player();
    command("say ����ħ������ħ�ű�֮������\���ǳ�ǿ������µ���ʲô�������Ƶ�...");
    command("say ��������һ���������ҵأ������ɵ���ʵ����̫������..."); 
    command("fear");
    command("say ��˵�������ơ������ء��ڹű���ص���ħ�����԰��ء�");
    return 1;
}

