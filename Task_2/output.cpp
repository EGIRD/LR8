#include "function.h"
void output()
{
    if (n == 0) {
        std::cout << "\nКвитанций нет.\n\n";
        return;
    }
    for(int i = 0; i < n; i++)
    {
        std::cout << "Кввитанция номер " << i + 1 << ":\n";
        std::cout << "Название изделия: " << p[i].name << '\n';
        std::cout << "Количество изделиий: " << p[i].quantity << '\n';
        std::cout << "Стоимость ремонта : ";
        if(p[i].is_double_price)
            std::cout << p[i].price.price_d << '\n';
        else
            std::cout << p[i].price.price_f << '\n';
        std::cout << "Дата приемки изделия на ремонт: " << p[i].date << '\n';
        std::cout << "Категория цены: " << p[i].expensive << '\n';  

        std::cout << "--------------------------\n";
    }
}
void output_new() {
    bool found = false;
    if (n == 0) {
        std::cout << "\nКвитанций нет.\n\n";
        return;
    }
    for(int i = 0; i < n; i++)
    {
        double current_price = p[i].is_double_price ? p[i].price.price_d : static_cast<double>(p[i].price.price_f);
        if(current_price > 100.341)
        {
            found = true;
            std::cout << "Квитанция номер " << i + 1 << ":\n";
            std::cout << "Название изделия: " << p[i].name << '\n';
            //std::cout << "Количество товара: " << p[i].quantity << '\n';
            std::cout << "Стоимость ремонта: " << current_price << '\n';
            std::cout << "Дата приемки иделия на ремонт " << p[i].date << '\n';
            std::cout << "Категория цены: " << p[i].expensive << '\n';  

            std::cout << "--------------------------\n";
        }
    }
}
    //if(!found){
      //  std::cout << "Нет товаров с ценой выше 100.341 рублей.\n";
    //}
//}