inherit NPC;
string do_give();
int i=1;

string do_ask (object me);

void create()
{
        set_name("���ķ�", ({ "wen fun","fun" }) );
        set("long", "
���ǽ���������Ԫ�Ե����ӣ�����Ԫ������÷����Ҳͬ���������ҳ�
��������һ��ԧ�쵶����ڵ���ʿɥ����
��������΢�ᣬ������ģ��������󣬱����֬��������Ĭ����֮���ס�
\n");
        
        set("nickname","��������");  

        set("age", 45);
        set("int", 26);
        set("cps", 22);
        set("str", 27);
        set("cor", 27);
        set("spi", 24);
        set("con", 30);
        set("kar", 28);
        set("per", 30);
        set( "force_factor", 10 );
        set( "score", 90 );
        set("combat_exp", 400000);
        set("force",1500);
        set("max_force",1500);
        set_skill("blade", 60);
        set_skill("dodge", 75);
        set_skill("parry", 60);
        set_skill("force", 58);
        set_skill("gold-blade",60);
        set_skill("sixforce",53);
        set_skill("fly-steps",64);
        map_skill("force", "sixforce");
        map_skill("blade", "gold-blade");
        map_skill("dodge", "fly-steps");

        set("race", "����");
        set( "gender", "Ů��");

        set("limbs", ({ "ͷ��",  "˫��", "˫��", "����" ,"����","����"}) );
    
        set("attitude", "peaceful");

        set("chat_chance", 6);
        set("chat_msg", ({
        "���ķ���ڹ�����ʿ����ǰ��������\n",
        "���ķ����Դ����˵�����̾������������һ�ƶ��Ĳ��β����ǿ���ô��źá���\n",
        }) );
        set("chat_chance_combat",10);
        set("chat_msg_combat",({
        "���ķ������ׯ�Ϸ�����������֪С�����ҡ���\n",
        "���ķ��ȣ�����֪С�������������ͷ��㡣��\n",
        "���ķ�̾�˿������������㲻���ҵĶ��֣���\n",
        }));
        set("inquiry",([
        "����" : "�������ǿ����Ķ��ӣ���������ʱ��ʹ������ʵ�ںܲ����ġ�\n",
        "��" :   "�����һλ��������ʥɮ������һҩ��˵�����κ����ƶ��Ĳ���Ҳ��֪�����Ǽ١�\n",
        "ҩ��" : "��������һ������ֵֹ�ҩ�ģ����Ҫ���ʳ����ҩ��������ҵõ��ɣ�\n",
        "ҩ����" : "��Ҫ����ȥץҩ�𣿲�Ȼ����ô����ʲô�أ�\n",
        "����" : "����˵���ǽ����������Ǹ���ˮ������\n",
        "ץҩ" : (:do_give:)
        
        ]));        
  
        setup();

        carry_object("/u/l/longhair/gold_blade/obj/mandarin_duck-blade.c")->wield();
        add_money("gold",15);
}

string do_give()
{
        if(this_player()->query_temp("magistral"))
        return "ҩ���أ�";
        if(i==0)
        return "���Ѿ����˰�������ȥ��ҩ�ˡ�";
        new("/open/gblade/obj/magistral.c")->move(this_player());
        message_vision("���ķ�ӻ����ó�һ��ҩ��ǩ , ����$N \n",this_player());
        i=i-1;
        this_player()->set_temp("magistral",1);
}

