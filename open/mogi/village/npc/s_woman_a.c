

inherit NPC;
void create()
{
        set_name("���",({"woman"}));
        set("title","ħ������");
         set("gender","Ů��");
        set("age",27);
        set("str",35);
        set("cor",45);
	set("cps",25);
	set("int",15);
    set("long","ħ������ͨ���, ��������������.\n");
	set("combat_exp",350);
	set("attitude", "peaceful");
        set("chat_chance", 25);
        set("chat_msg", ({
            "���: ǧ������ɢ���Ķ��������ޱ�, û����\(���붴Ѩ)��.\n",
            "���: ��˵�����¥�Ĺ���ƺ���ʲôԩ�������춼˵Ҫ(�ַ�)������֡�",
            "���: ��˵(��Ҷ����)���꿪��һ��, һ�����ڽ��, ��һ���ӹ�ʵ����.\n",
            "���: ��˵��ħ������װ���ж�����, ��ȥ��û�����ܻ�����.\n",
              (: this_object(),"random_move" :),
        }) );
	set_skill("parry", 15);
        set_skill("dodge", 5);
	setup();
         	
}

