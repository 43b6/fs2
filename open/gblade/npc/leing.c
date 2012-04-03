inherit NPC;

string do_ask (object me);
string ask_moon();
void create()
{
        set_name("������", ({ "leing",}) );
        set("long", "
�������ҵĴ�С�㣬ֻ��������������������ü��һ˫��ϲ��ϲ�ĺ���
Ŀ������΢΢�����������ƺ��������ಡ�ĸ���ǧ����ôҲ��������
���ҵ��ӵܡ�\n");
        set("title","������ǧ���С��");
        set("nickname","��������");  
        set("age", 21);
        set("int", 30);
        set("cps", 25);
        set("str", 22);
        set("cor", 23);
        set("spi", 30);
        set("con", 24);
        set("kar", 28);
        set("per", 30);
        set( "force_factor", 6 );
	set("combat_exp",100000);
        set("force",600);
        set("max_force",600);
        set_skill("blade", 50);
        set_skill("dodge", 80);
        set_skill("parry", 60);
        set_skill("force", 50);
        set_skill("literate",90);
	set_skill("gold-blade",60);
	set_skill("unarmed",40);
        set_skill("sixforce",40);
        set_skill("fly-steps",90);
        set_skill("move",60);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");

        set( "gender", "Ů��");

        set("limbs", ({ "ͷ��",  "˫��", "˫��", "����" ,"����","����"}) );
     
        set("attitude", "peaceful");

        set("chat_chance", 2);
        set("chat_msg", ({
         "�����鲻�ϵ�̾�����ƺ���ʲô���¡�\n",
         "������̾��������˼������ծ�ġ�ÿ����߱ơ�������һ���׼������
�������ⱾǮ����ʱ����á�����������˼���彭��--��˼��\n",
         "�������������ҹ�����ݷ��С�ů�����屻ԧ㥡��š������㣬�顫����
�㡣�ε���ˮǧɽ����������˼��������ֻ����������ծ��ü��\��....\n"
        }) );
         set("inquiry",([
        "��Ԫ��" : "�����ҵ��� !\n",
	"�������" : "������֪ , ������������ , ��������콣�������� !\n",
	"����콣" : "�����ɽ��ɿ�ɽ��ʦ��ң�ӵ��彣 !\n",
	"������"   : "���������ҽ������� , �������֮�嵶 !\n",
        "����" : "�� , ��Ὣ���¸���Į������ ?\n",
	"������" : "������Զ�һЩ����ſ��ö������ɰɣ�\n",
        "����" : "������Զ�һЩ����ſ��ö������ɰɣ�\n",
        "����" : "��Ҫ�Ұ��㷭����ģ���Ҫ��Ҫ�ҷ���Ķ���������ѽ��\n",
        "��Т��" : "�������Ҫ��ʲô�أ�\n",
        "�ɶ�" : "��ʵ����һ���ϻ۵�Ů���ӡ�\n",
		 "�°���"  :  (: ask_moon :),
        "�޼�" : "��....��˭����û����....�ȵ����������ˣ���˵���ú�ϲ������\n"
        ]));
      
        setup();

	carry_object("/open/gblade/obj/mandarin_duck-blade.c")->wield();
	carry_object("/open/gblade/obj/topknot.c")->wear();
	carry_object("/open/gblade/obj/glow-cloth")->wear();
	carry_object("/open/gblade/obj/boots1.c")->wear();
        add_money("gold",5);
}

int accept_object(object who,object ob)
{
        string ob_id;
        ob_id=ob->query("id");
        if(ob_id=="papyrus")
        {
	if(who->query("quests/lotch") || who->query("lotch")>0)
	{
	command("say �Ҳ��ǰ��㷭����� ?");
	return 1;
	}
        command("say ����΢��һ�¡�");
	message_vision("�������ó���ֽ�� , ��ʼ���� !\n",this_player());
	call_out("do_give",10,this_player());
        }
  return 1;
 }
 string ask_moon()
{
    if(!this_player()->query_temp("ask_moon5"))
	return "��....���ҿɲ��������������ʱ��˰ɡ�";
	this_player()->set_temp("ask_moon6",1);
	command("say �Դ����麣�����,ֻ���˸�����һ����˵����Զ�볾��,����ɽ���ӡ�");
	command("say ��Ҳ�����ó���֮�ʱ��Ⱥɽ,��ϧʼ��δ���ҵ������ټ���");
	return "ϣ������˳���ҵ���,��Ҳϣ�������������......";	
}    
 void do_give(object who)
 {
        command("say �Ȿ�����Ǵ����������ģ���ͷд�Ķ������ǽ��ŵ���ʷ��");
        command("say �������ģ���Щ���Ҷ���������Щ��Ϊ���ȱ�������벻ȫ��");       
        new("/open/gblade/obj/paper.c")->move(who);
	message_vision("�����齫��õ�ֽ�� , ������$N\n",who);
	who->set("lotch",1);
   
 }
