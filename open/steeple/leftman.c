inherit NPC;
#include <ansi.h>
string an01();
void create ()
{
set_name("��ͭ��",({"Copper door of left","door","left"}));
set("long","
�Դ�����֮�����֮�󣬾�һֱ�ػ������ͭ�ŵ������ߣ��ö���֮
�������ͭ��ͬ���ˣ����ֻʣ��һ��������֫¶��ͭ���⣬�������
���йؽ������ڵġ���������ʲô��\n");
set("age",200);
set("gender","����");
set("title","������������");
set("inquiry",([
"����" : (: an01 :),
]));
set("chat_chance", 10);
set("chat_msg", ({
HIY"��ͭ�������ӹ��๾���ת�ţ��������ƺ������ġ�\n"NOR,
}));

setup();
}
string an01()
{
command("hmm");
command("say �����Ҫ�ȵ����ߵ���Ʊͥ��һ���볡ȯ���ܽ��롣\n");
return "�ٸ����˵һ��...������˶���ǿ�\n";
}
