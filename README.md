## Store Inventory 📝

Este sistema de inventario en C++ es una aplicación de consola diseñada para gestionar productos en una tienda. El programa permite agregar, eliminar y listar productos en el inventario utilizando principios de programación orientada a objetos como herencia, agregación, sobrecarga, sobreescritura y polimorfismo.

Este tipo de sistema de inventario tiene aplicaciones directas en entornos comerciales y empresariales ya que ayuda a mantener el control sobre las cantidades de productos disponibles, lo cual es crucial para la gestión de la cadena de suministro y al registrar precios y cantidades, el sistema puede ser utilizado para valorar el inventario actual y prever necesidades de compra o producción.

## Solución ✅

Las tiendas minoristas a menudo tienen que gestionar una variedad de productos con diferentes características y necesidades de seguimiento. El problema específico es cómo gestionar eficientemente el inventario de estos productos, incluyendo la adición de nuevos productos, la eliminación de productos vendidos o agotados, y la visualización del inventario actual para decisiones comerciales.

Para ello se hizo un programa con las siguientes características y diseño:

Modelado de Productos:

- Usamos herencia para definir una clase base Product y clases derivadas (Electronic, Clothing, Fruit) para representar diferentes tipos de productos con atributos específicos.

Abstracción y Polimorfismo:

- La clase abstracta Product define una interfaz común getDetails() para todos los productos, permitiendo la gestión uniforme y simplificada.

Gestión del Inventario:

- La clase Store maneja el inventario usando un vector de punteros compartidos a Product, facilitando la adición y eliminación de productos.
- Métodos como addProductToInventory y removeProductFromInventory permiten modificar dinámicamente el inventario.

Visualización del Inventario:

- Store utiliza el método getDetails() de cada producto para obtener y mostrar información formateada sobre el inventario.
- Usamos std::ostringstream y std::setprecision para asegurar una presentación clara y profesional de los detalles de los productos.

