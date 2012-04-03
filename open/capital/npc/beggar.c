// beggar.c
// first written by grand 9/30/1995
// fixed by wade

inherit NPC;

void create()
{
	set_name("��ؤ", ({ "beggar" }) );
	set("race", "����");
	set("age", 23);
	set("long", "һ���������������ؤ����������۹⿴����.\n
	              ������������˵�ɱ������,���������...\n ");
	set("str", 24);
	set("cor", 26);
	set("chat_chance", 15);
	set("chat_msg", ({
		"��ؤ���������������ӡ�\n",
		"��ؤ��ס��Ľţ����ֶ����ԡ�\n",
		"��ؤ�����������\n" }) );
	set("inquiry", ([
	"thief" : "����һЩǮ, �Ҿ�͵͵˵��������",
	]));
	set("combat_exp",256);
	set_temp("apply/attack", 10);
	set_temp("apply/armor", 3);

        setup();
carry_object("/obj/cloth")->wear();
}

void reset()
{
  delete("accept_object");
}

// ���ܴ����ʶ���ĳЩ��Ҳ���, ���޷�ѧ��, �ĳ�һ��ֻ��һ�λ���
// reset ��ʱ���������������ʱ���������, fixed by wade 12/13/1995
int accept_object(object who, object ob)
{
	int b, value;

	if (!query("accept_object/"+who->query("id"))) {
	  b = who->query("bellicosity"); 
          if( (value=ob->value())  && b>0 ) {
		value = value/10;
		if (value < 1) value = 1;
		b = b - value;
		if (b < 0) b = 0;
	        who->set("bellicosity", b); 
		add("accept_object/"+who->query("id"), 1);
		write("���������ϴ����һЩ.\n");
	  }
	}
	else
	  say ("лл! лл!\n");
	destruct(ob);
        return 1;
}
