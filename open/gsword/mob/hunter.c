inherit NPC;

void create()
{
         set_name("���˰���",({"hunter"}));
	set("long","һ����С��ɭ���г��������,����ֻ�����,ȴ��ɭ���е��������
η��,�ѵ�����ѧ��Щ�书?\n");
	set("gender","����");
	set("combat_exp",23590);
        set("attitude","heroism");
	set("force",500);
	set("max_force",500);
	set("force_factor",5);
        set("age",25);
        set("score",100);
        set("str", 50);
        set("cor", 30);
        set("per", 15);
        set("int", 15);
	set("cps", 30);
	set("con", 30);
        set("kar", 20);
   /*
	set("chat_chance",10);
	set("chat_msg",({
	"���˰���˵:���ϻ�,���Ҳ��������Ƥ����̺.\n",
	"���˰���˵:��ʵ�������Ȥ�Ļ�����ֻ���ϻ�.\n"}));
      */
        set_skill("dodge",30);
        set_skill("unarmed",30);
        set_skill("parry",20);
       set_skill("snow-martial",30);
        map_skill("dodge", "snow-martial");
        map_skill("unarmed", "snow-martial");
	set("inquiry",([
	"���ϻ�": "ǰ�������п���һֻ���ϻ�,��ϧ��������,��,��Ϊһ������,����
������ԸĪ�����ܵõ��׻�Ƥ.\n",
	"�׻�Ƥ": "�������һ�ð׻�Ƥ,��ĳ�����޺�.\n",
	]));
	setup();
        carry_object("/u/w/wugi/obj/hunter_cloth")->wear();
}
	int accept_object(object who,object ob)
	{
	string ob_id;
	ob_id=ob->query("id");
	if(ob_id=="white tiger skin")
	{
	command("say ����..��ʵ��̫������,����������ҽ�����,Ϊ�˱�����Ķ���
�Ҹ�����һ������,���ͱ��ϵĶ�Ѩ��,ס��һλ����,��ĳ��������ָ���˼���,
�����ǿ��׳,��������,�㵽��Ѩ�����ҿ�(search hole),Ҳ�����д˻�Ե,��
������.\n");
	}
	return 1;
	}
         
      
