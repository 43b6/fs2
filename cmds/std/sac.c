// sac.c  ���Խ�����Ҫ�� ��Ʒ �� ʬ����׸����� �����ƺ�ս����Ҳ����ʹ��
// �Ժ��л���������         By Anmy    97/11/22
// �������� ս���м� ���Ե�mob �޷� sac ���趨��  By Anmy  98/5/22
// ���������� sac all by swy
#include <ansi.h>
inherit F_CLEAN_UP;
int main(object tp, string str)
{
   object ob, *inv;
	int val,i;
	tp = this_player();
	if(!str) return notify_fail("�������ʲô��\n");
seteuid(getuid());
if(str=="all") {
inv = all_inventory(environment(tp));
	for(i=0;i<sizeof(inv);i++)
	{
		if(living(inv[i])) continue;
		if(inv[i]->is_fighting()) continue;
if(in_edit(inv[i])||in_input(inv[i])||inv[i]->query_temp("netdead")) continue;
if(inv[i]->query("no_sac")) continue;
if(userp(inv[i])) continue;
if(inv[i]->query("capacity")) continue;
    message_vision(HIC"$N��"+inv[i]->short()+"���׸�����\n"NOR, tp);
	destruct(inv[i]);
	}
	return 1;
        }
	ob = present(str, environment(tp));
	if(!ob) return notify_fail("���Ҳ�������������\n");
        if (tp->is_fighting()) return notify_fail("���ϸ�������û��ɡ�\n");
   if(living(ob)) return notify_fail("�㲻�ܷ��׻�����\n");
   if(ob->query("no_sac",1)) return notify_fail("�㲻�ܰ�������׵���\n");
   if(ob->is_fighting()) return notify_fail("������ս���У��޷�����ȥ����\n");
   if(userp(ob)) return notify_fail("�㲻�ܷ������!!\n");
   if(ob->query("capacity") > 1) //�����õ�
   return notify_fail("���԰岻�ܷ���!!!!\n");
        if (in_edit(ob) || in_input(ob) || ob->query_temp("netdead"))
          return notify_fail (ob->name() +"����æ��..\n");
message_vision(HIC"$N�Ժ��ź������齫"+ob->short()+"���볾�����š�\n"NOR,tp);
//����sac���˿����õ�Ǳ��...һ��.�����sac������
	write(tp->name()+"������, �������һ��Ǯ��Ϊ�ʹ͡�\n");
	destruct(ob);
	new("/obj/money/coin")->move(tp);
	return 1;
}

void help() {
  write(" �����÷� : sac <������Ʒ> \n\n");
  write(" �����õĶ������׸�����, �������豨�ꡣ\n\n");
  return;
} 
