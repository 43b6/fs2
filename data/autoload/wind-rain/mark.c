// ���ϸ��¥����--������
//roger && taifar
inherit ITEM;
#include <ansi.h>
void create()
{
	set_name(HIY"������"NOR, ({"wind_rain mark","wind_rain" }));
	set_weight(5);
        set("no_sell",1);
        set("no_auc",1);
        set("no_drop",1);
        set("no_give",1);
	if( clonep() )
		set_default_object(__FILE__);
	else {
		set("unit", "��");
		set("long","
   �������˵�е����ذ�ᡸ���ϸ��¥�������һ��Ϊ����¥�����С�
   �������Ժ������֣����ɵ��ȷ���¥��"HIY"�����ϸ�ꡱ"NOR"�ı��������ִ�����һ
   ����ǹ��ϵ������������ĳ�����ʱһ�����䲻��������س�������������
   ��ƽʢ���Ѿ��ߵ��˾�ͷ��¥�з���������

   ϸ���������ֱ�����"HIC"���硱"HIW"���ꡱ"NOR"�����֣�����������С��:

              "HIC"�������꣬��������  ��������������ݱ��"NOR"

\n");
		set("value", 100);
		set("material", "paper");
	}
        setup();
}
int query_autoload()
{
if(this_player()->query("mark/��������",1)==1)
return 1;
}
