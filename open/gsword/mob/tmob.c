// copy from /d/snow/npc/teacher.c
inherit NPC;

int a;
int b;
int in_toss;

void create()
{
	set_name("����", ({ "wang","wang kai","kai"}) );
	set("gender", "����" );
	set("age", 43);
	set("int", 26);
        set("long","�����۾�����Ŀ���������һ�����빫�����������дʡ������
 ����֪����J���ﵽ����ɶ�������߽�һ���������գ���Ȼ�������ݡ�\n" );
        
        set("inquiry",([
        "����": "����˭�����ص�����һ�Ų�֪������֪����������㣬���߰ɡ�\n",
        "��ӡ": "������˵��ô��������Ļ����ˣ����������Ѱɣ���Ӯ�ˣ�������
        	��Ҳ���ٰ���\n"]
        ) );
	
	set("combat_exp",1087);
        set("max_kee",500);
        set("max_gin",500);                        
	set("attitude", "peaceful");
	set_skill("unarmed",50);
	set_skill("parry",50);
	set_skill("force",50);
	setup();
}

init()
{
	add_action("play_dice","play");
	add_action("toss_dice","toss");
}


int play_dice(string str)
{

	if( str!="dice" ) {
		write("��Ҫ��ʲô��\n");
		return 1;
	}
	write("������:�������ɣ���������\n");
	return 1;
}

int toss_dice(string str)
{
	if( str!="dice") {
		printf("��Ҫ��ʲô��\n");
		return 1;
	}
	if( in_toss ){
		printf("�����ڸ������棬��Ҫ������ǣ���\n");
		return 1;
	}

	a=random(5)+1;
	b=random(5)+1;
	message_vision("$N�󺰡�[1m���а���䣬����콫Ϊ�����ã�����������[0m\n", this_player());
	if( a > 3 ) {
	 message_vision("$N��Ц : �������������� "+a+" �㣬���������׶༪�٣��� �����ˣ�\n", this_player());
	} else {
	 message_vision("$N��ͷɥ����˵ : ������������������Ȼ�� "+a+" ��,������˰ɣ������ɣ�\n", this_player());
	}//end if_else
	remove_call_out("shou_turn");
	in_toss=1;
	call_out("shou_turn",2, this_player()->query("id"));
	return 1;
}

void shou_turn(string str)
{
        say("\nֻ��������Ѹ�ײ����ڶ��ٶȣ����빫�ڿ��л�����Ȧ���漴�������ϣ����һ������������\n");
	if( b > a ){
		command("say " + sprintf("����С�ֵ������ˣ������� %d �㡣\n", b));
	}
        else if( b==a){
		command("say " + sprintf("��Ҳ������ %d �㣬�������ǿ��ǺϾ��ˡ�\n", b));
	}
	else {
		this_object()->add(str, 1);
		if(this_object()->query(str) != 3)
			command("say " + sprintf("���Ǳ������������� %d �㣬���ҵ�鹣������������ѣ���\n",b));
		else if(this_object()->query(str) == 3)
		{
			command("say " + sprintf("���Ǳ������������� %d �㣬��������!! �Ҿ͸�����ɡ�\n",b));
			command("tell "+ str +" ������ʦү��ң������������������ӡ��������ʦү����֮��Ͱ���������ֱ𽻸�����������ӱ��ܣ�Ҫ�⿪��ħ�ķ�ӡ����Ҫ����������ͬʱʩ��������֮�����������\n"); 
			this_object()->delete(str);
		}
	}
	in_toss = 0;
}
