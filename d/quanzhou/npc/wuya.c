// wuya.c

inherit NPC;

void create()
{
        set_name("��ѻ", ({ "wuya", "craw" }) );
	set("subrace", "����");
        set("age", 3);
        set("long", "һֻ��ɫ����ѻ����ª���ˡ�\n");
        set("attitude", "peaceful");
        set("combat_exp", 300);
        set_temp("apply/attack", 3);
        set_temp("apply/defense", 5);
        set_temp("apply/armor", 1);

        set("chat_chance", 10);
        set("chat_msg", ({
		"��ѻ���¸¡����˼�����\n",
		"��ѻ�е������¸¡���\n",
                "��ѻ����ǰ���Ϸ��¡�\n",
        }) );

        setup();
}
